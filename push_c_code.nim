

import os

proc exec(cmd: string) =
  if execShellCmd(cmd) != 0: quit("FAILURE " & cmd)

proc main() =
  if not dirExists(".git"):
    quit "[Error] no csources git repository found"

  copyDir("../nimv1/build", getCurrentDir())

  for kind, path in walkDir("c_code"):
    if kind == pcDir:
      exec("git add " & path / "*.c")

  exec("git add makefile")
  exec("git add *.sh")
  exec("git add *.bat")
  exec("git add c_code/*.h")

main()
