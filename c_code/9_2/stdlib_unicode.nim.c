/* Generated by Nim Compiler v1.0.11 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, runeLenAt__WMpE2MYPWM1HlcK1wXx02Q)(NimStringDesc* s, NI i);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s) {	NI result;
	NI i;
	result = (NI)0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			{
				if (!((NU64)(((NU) (((NU8)(s->data[i]))))) <= (NU64)(((NI) 127)))) goto LA5_;
				i += ((NI) 1);
			}
			goto LA3_;
			LA5_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA8_;
				i += ((NI) 2);
			}
			goto LA3_;
			LA8_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA11_;
				i += ((NI) 3);
			}
			goto LA3_;
			LA11_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA14_;
				i += ((NI) 4);
			}
			goto LA3_;
			LA14_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 2))) == ((NI) 62))) goto LA17_;
				i += ((NI) 5);
			}
			goto LA3_;
			LA17_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 1))) == ((NI) 126))) goto LA20_;
				i += ((NI) 6);
			}
			goto LA3_;
			LA20_: ;
			{
				i += ((NI) 1);
			}
			LA3_: ;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, runeLenAt__WMpE2MYPWM1HlcK1wXx02Q)(NimStringDesc* s, NI i) {	NI result;
	result = (NI)0;
	{
		if (!((NU64)(((NU) (((NU8)(s->data[i]))))) <= (NU64)(((NI) 127)))) goto LA3_;
		result = ((NI) 1);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA6_;
		result = ((NI) 2);
	}
	goto LA1_;
	LA6_: ;
	{
		if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA9_;
		result = ((NI) 3);
	}
	goto LA1_;
	LA9_: ;
	{
		if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA12_;
		result = ((NI) 4);
	}
	goto LA1_;
	LA12_: ;
	{
		if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 2))) == ((NI) 62))) goto LA15_;
		result = ((NI) 5);
	}
	goto LA1_;
	LA15_: ;
	{
		if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 1))) == ((NI) 126))) goto LA18_;
		result = ((NI) 6);
	}
	goto LA1_;
	LA18_: ;
	{
		result = ((NI) 1);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset__EnrqtYM0boqQqeAIRc9bdmA)(NimStringDesc* s, NI pos, NI start) {	NI result;
	NI i;
	NI o;
{	result = (NI)0;
	i = ((NI) 0);
	o = start;
	{
		while (1) {
			NI T3_;
			if (!(i < ((NI) (pos)))) goto LA2;
			T3_ = (NI)0;
			T3_ = runeLenAt__WMpE2MYPWM1HlcK1wXx02Q(s, o);
			o += ((NI) (T3_));
			{
				if (!((s ? s->Sup.len : 0) <= ((NI) (o)))) goto LA6_;
				result = ((NI) -1);
				goto BeforeRet_;
			}
			LA6_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	result = ((NI) (o));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8__gZHDHaRdP4jROav7Hun29aA)(NimStringDesc* s) {	NI result;
	NI i;
	NI L;
{	result = (NI)0;
	i = ((NI) 0);
	L = (s ? s->Sup.len : 0);
	{
		while (1) {
			if (!(i < L)) goto LA2;
			{
				if (!((NU64)(((NU) (((NU8)(s->data[i]))))) <= (NU64)(((NI) 127)))) goto LA5_;
				i += ((NI) 1);
			}
			goto LA3_;
			LA5_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA8_;
				{
					if (!((NU64)(((NU) (((NU8)(s->data[i]))))) < (NU64)(((NI) 194)))) goto LA12_;
					result = i;
					goto BeforeRet_;
				}
				LA12_: ;
				{
					NIM_BOOL T16_;
					T16_ = (NIM_BOOL)0;
					T16_ = ((NI)(i + ((NI) 1)) < L);
					if (!(T16_)) goto LA17_;
					T16_ = ((NU)((NU64)(((NU) (((NU8)(s->data[(NI)(i + ((NI) 1))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA17_: ;
					if (!T16_) goto LA18_;
					i += ((NI) 2);
				}
				goto LA14_;
				LA18_: ;
				{
					result = i;
					goto BeforeRet_;
				}
				LA14_: ;
			}
			goto LA3_;
			LA8_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA22_;
				{
					NIM_BOOL T26_;
					NIM_BOOL T27_;
					T26_ = (NIM_BOOL)0;
					T27_ = (NIM_BOOL)0;
					T27_ = ((NI)(i + ((NI) 2)) < L);
					if (!(T27_)) goto LA28_;
					T27_ = ((NU)((NU64)(((NU) (((NU8)(s->data[(NI)(i + ((NI) 1))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA28_: ;
					T26_ = T27_;
					if (!(T26_)) goto LA29_;
					T26_ = ((NU)((NU64)(((NU) (((NU8)(s->data[(NI)(i + ((NI) 2))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA29_: ;
					if (!T26_) goto LA30_;
					i += ((NI) 3);
				}
				goto LA24_;
				LA30_: ;
				{
					result = i;
					goto BeforeRet_;
				}
				LA24_: ;
			}
			goto LA3_;
			LA22_: ;
			{
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA34_;
				{
					NIM_BOOL T38_;
					NIM_BOOL T39_;
					NIM_BOOL T40_;
					T38_ = (NIM_BOOL)0;
					T39_ = (NIM_BOOL)0;
					T40_ = (NIM_BOOL)0;
					T40_ = ((NI)(i + ((NI) 3)) < L);
					if (!(T40_)) goto LA41_;
					T40_ = ((NU)((NU64)(((NU) (((NU8)(s->data[(NI)(i + ((NI) 1))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA41_: ;
					T39_ = T40_;
					if (!(T39_)) goto LA42_;
					T39_ = ((NU)((NU64)(((NU) (((NU8)(s->data[(NI)(i + ((NI) 2))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA42_: ;
					T38_ = T39_;
					if (!(T38_)) goto LA43_;
					T38_ = ((NU)((NU64)(((NU) (((NU8)(s->data[(NI)(i + ((NI) 3))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA43_: ;
					if (!T38_) goto LA44_;
					i += ((NI) 4);
				}
				goto LA36_;
				LA44_: ;
				{
					result = i;
					goto BeforeRet_;
				}
				LA36_: ;
			}
			goto LA3_;
			LA34_: ;
			{
				result = i;
				goto BeforeRet_;
			}
			LA3_: ;
		} LA2: ;
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c) {	NimStringDesc* result;
	NI32 iX60gensym203117_;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	iX60gensym203117_ = c;
	{
		if (!((NU32)(iX60gensym203117_) <= (NU32)(((NI32) 127)))) goto LA3_;
		result = setLengthStr(result, ((NI) 1));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) (iX60gensym203117_))));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((NU32)(iX60gensym203117_) <= (NU32)(((NI32) 2047)))) goto LA6_;
		result = setLengthStr(result, ((NI) 2));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 6))) | ((NI32) 192))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym203117_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA6_: ;
	{
		if (!((NU32)(iX60gensym203117_) <= (NU32)(((NI32) 65535)))) goto LA9_;
		result = setLengthStr(result, ((NI) 3));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 12))) | ((NI32) 224))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym203117_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA9_: ;
	{
		if (!((NU32)(iX60gensym203117_) <= (NU32)(((NI32) 2097151)))) goto LA12_;
		result = setLengthStr(result, ((NI) 4));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 18))) | ((NI32) 240))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym203117_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA12_: ;
	{
		if (!((NU32)(iX60gensym203117_) <= (NU32)(((NI32) 67108863)))) goto LA15_;
		result = setLengthStr(result, ((NI) 5));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 24))) | ((NI32) 248))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym203117_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA15_: ;
	{
		if (!((NU32)(iX60gensym203117_) <= (NU32)(((NI32) 2147483647)))) goto LA18_;
		result = setLengthStr(result, ((NI) 6));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 30))) | ((NI32) 252))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 24))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym203117_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		result->data[((NI) 5)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym203117_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA18_: ;
	{
	}
	LA1_: ;
	return result;
}
