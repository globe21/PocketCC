/*
	File:  AVFoundation.h

	Framework:  AVFoundation
 
	Copyright 2008-2013 Apple Inc. All rights reserved.

	To report bugs, go to:  http://developer.apple.com/bugreporter/

*/

#import <AVFoundation/AVBase.h>

#import <AVFoundation/AVAudioPlayer.h>
#import <AVFoundation/AVAudioRecorder.h>
#if TARGET_OS_IPHONE
#import <AVFoundation/AVAudioSession.h>
#endif
#import <AVFoundation/AVAudioSettings.h>

#import <AVFoundation/AVAnimation.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVAssetExportSession.h>
#import <AVFoundation/AVAssetImageGenerator.h>
#import <AVFoundation/AVAssetReader.h>
#import <AVFoundation/AVAssetReaderOutput.h>
#import <AVFoundation/AVAssetResourceLoader.h>
#import <AVFoundation/AVAssetTrack.h>
#import <AVFoundation/AVAssetTrackGroup.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <AVFoundation/AVAssetWriter.h>
#import <AVFoundation/AVAssetWriterInput.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <AVFoundation/AVAudioMix.h>
#import <AVFoundation/AVAudioProcessingSettings.h>

#if (TARGET_OS_IPHONE || defined(__MAC_10_7))
#import <AVFoundation/AVCaptureDevice.h>
#import <AVFoundation/AVCaptureInput.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureSession.h>
#import <AVFoundation/AVCaptureVideoPreviewLayer.h>
#endif

#import <AVFoundation/AVComposition.h>
#import <AVFoundation/AVCompositionTrack.h>
#import <AVFoundation/AVCompositionTrackSegment.h>
#import <AVFoundation/AVError.h>
#import <AVFoundation/AVMediaFormat.h>
#import <AVFoundation/AVMediaSelectionGroup.h>
#import <AVFoundation/AVMetadataFormat.h>
#import <AVFoundation/AVMetadataItem.h>
#if TARGET_OS_IPHONE
#import <AVFoundation/AVMetadataObject.h>
#endif
#import <AVFoundation/AVOutputSettingsAssistant.h>
#import <AVFoundation/AVPlayer.h>
#import <AVFoundation/AVPlayerItem.h>
#import <AVFoundation/AVPlayerItemOutput.h>
#if (TARGET_OS_MAC && !(TARGET_OS_EMBEDDED || TARGET_OS_IPHONE))
#import <AVFoundation/AVPlayerItemProtectedContentAdditions.h>
#endif
#import <AVFoundation/AVPlayerItemTrack.h>
#import <AVFoundation/AVPlayerLayer.h>
#import <AVFoundation/AVPlayerMediaSelectionCriteria.h>
#if (TARGET_OS_MAC && !(TARGET_OS_EMBEDDED || TARGET_OS_IPHONE))
#import <AVFoundation/AVSampleBufferDisplayLayer.h>
#endif
#if TARGET_OS_IPHONE
#import <AVFoundation/AVSpeechSynthesis.h>
#endif
#import <AVFoundation/AVSynchronizedLayer.h>
#import <AVFoundation/AVTextStyleRule.h>
#import <AVFoundation/AVTime.h>
#import <AVFoundation/AVTimedMetadataGroup.h>
#import <AVFoundation/AVUtilities.h>
#import <AVFoundation/AVVideoComposition.h>
#import <AVFoundation/AVVideoSettings.h>
