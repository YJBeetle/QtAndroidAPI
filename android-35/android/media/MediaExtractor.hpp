#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/AssetFileDescriptor.def.hpp"
#include "./DrmInitData.def.hpp"
#include "./MediaCas.def.hpp"
#include "./MediaCodec_CryptoInfo.def.hpp"
#include "./MediaDataSource.def.hpp"
#include "./MediaExtractor_CasInfo.def.hpp"
#include "./MediaFormat.def.hpp"
#include "./metrics/LogSessionId.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaExtractor.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaExtractor::SAMPLE_FLAG_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_ENCRYPTED"
		);
	}
	inline jint MediaExtractor::SAMPLE_FLAG_PARTIAL_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_PARTIAL_FRAME"
		);
	}
	inline jint MediaExtractor::SAMPLE_FLAG_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_SYNC"
		);
	}
	inline jint MediaExtractor::SEEK_TO_CLOSEST_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_CLOSEST_SYNC"
		);
	}
	inline jint MediaExtractor::SEEK_TO_NEXT_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_NEXT_SYNC"
		);
	}
	inline jint MediaExtractor::SEEK_TO_PREVIOUS_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_PREVIOUS_SYNC"
		);
	}
	
	// Constructors
	inline MediaExtractor::MediaExtractor()
		: JObject(
			"android.media.MediaExtractor",
			"()V"
		) {}
	
	// Methods
	inline jboolean MediaExtractor::advance() const
	{
		return callMethod<jboolean>(
			"advance",
			"()Z"
		);
	}
	inline JObject MediaExtractor::getAudioPresentations(jint arg0) const
	{
		return callObjectMethod(
			"getAudioPresentations",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jlong MediaExtractor::getCachedDuration() const
	{
		return callMethod<jlong>(
			"getCachedDuration",
			"()J"
		);
	}
	inline android::media::MediaExtractor_CasInfo MediaExtractor::getCasInfo(jint arg0) const
	{
		return callObjectMethod(
			"getCasInfo",
			"(I)Landroid/media/MediaExtractor$CasInfo;",
			arg0
		);
	}
	inline android::media::DrmInitData MediaExtractor::getDrmInitData() const
	{
		return callObjectMethod(
			"getDrmInitData",
			"()Landroid/media/DrmInitData;"
		);
	}
	inline android::media::metrics::LogSessionId MediaExtractor::getLogSessionId() const
	{
		return callObjectMethod(
			"getLogSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline android::os::PersistableBundle MediaExtractor::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JObject MediaExtractor::getPsshInfo() const
	{
		return callObjectMethod(
			"getPsshInfo",
			"()Ljava/util/Map;"
		);
	}
	inline jboolean MediaExtractor::getSampleCryptoInfo(android::media::MediaCodec_CryptoInfo arg0) const
	{
		return callMethod<jboolean>(
			"getSampleCryptoInfo",
			"(Landroid/media/MediaCodec$CryptoInfo;)Z",
			arg0.object()
		);
	}
	inline jint MediaExtractor::getSampleFlags() const
	{
		return callMethod<jint>(
			"getSampleFlags",
			"()I"
		);
	}
	inline jlong MediaExtractor::getSampleSize() const
	{
		return callMethod<jlong>(
			"getSampleSize",
			"()J"
		);
	}
	inline jlong MediaExtractor::getSampleTime() const
	{
		return callMethod<jlong>(
			"getSampleTime",
			"()J"
		);
	}
	inline jint MediaExtractor::getSampleTrackIndex() const
	{
		return callMethod<jint>(
			"getSampleTrackIndex",
			"()I"
		);
	}
	inline jint MediaExtractor::getTrackCount() const
	{
		return callMethod<jint>(
			"getTrackCount",
			"()I"
		);
	}
	inline android::media::MediaFormat MediaExtractor::getTrackFormat(jint arg0) const
	{
		return callObjectMethod(
			"getTrackFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0
		);
	}
	inline jboolean MediaExtractor::hasCacheReachedEndOfStream() const
	{
		return callMethod<jboolean>(
			"hasCacheReachedEndOfStream",
			"()Z"
		);
	}
	inline jint MediaExtractor::readSampleData(java::nio::ByteBuffer arg0, jint arg1) const
	{
		return callMethod<jint>(
			"readSampleData",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	inline void MediaExtractor::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaExtractor::seekTo(jlong arg0, jint arg1) const
	{
		callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1
		);
	}
	inline void MediaExtractor::selectTrack(jint arg0) const
	{
		callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0
		);
	}
	inline void MediaExtractor::setDataSource(android::content::res::AssetFileDescriptor arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		);
	}
	inline void MediaExtractor::setDataSource(android::media::MediaDataSource arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.object()
		);
	}
	inline void MediaExtractor::setDataSource(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void MediaExtractor::setDataSource(JString arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaExtractor::setDataSource(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaExtractor::setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaExtractor::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void MediaExtractor::setLogSessionId(android::media::metrics::LogSessionId arg0) const
	{
		callMethod<void>(
			"setLogSessionId",
			"(Landroid/media/metrics/LogSessionId;)V",
			arg0.object()
		);
	}
	inline void MediaExtractor::setMediaCas(android::media::MediaCas arg0) const
	{
		callMethod<void>(
			"setMediaCas",
			"(Landroid/media/MediaCas;)V",
			arg0.object()
		);
	}
	inline void MediaExtractor::unselectTrack(jint arg0) const
	{
		callMethod<void>(
			"unselectTrack",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
