#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "interf_dec.h"
#import "interf_enc.h"
#import "wavreader.h"
#import "wavwriter.h"
#import "wav_amr.h"

FOUNDATION_EXPORT double LSSWarToAmrVersionNumber;
FOUNDATION_EXPORT const unsigned char LSSWarToAmrVersionString[];

