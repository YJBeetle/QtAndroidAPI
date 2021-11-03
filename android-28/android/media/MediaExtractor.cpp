#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "./DrmInitData.hpp"
#include "./MediaCas.hpp"
#include "./MediaCodec_CryptoInfo.hpp"
#include "./MediaDataSource.hpp"
#include "./MediaExtractor_CasInfo.hpp"
#include "./MediaFormat.hpp"
#include "../net/Uri.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaExtractor.hpp"

namespace android::media
{
	// Fields
	jint MediaExtractor::SAMPLE_FLAG_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_ENCRYPTED"
		);
	}
	jint MediaExtractor::SAMPLE_FLAG_PARTIAL_FRAME()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_PARTIAL_FRAME"
		);
	}
	jint MediaExtractor::SAMPLE_FLAG_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_SYNC"
		);
	}
	jint MediaExtractor::SEEK_TO_CLOSEST_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_CLOSEST_SYNC"
		);
	}
	jint MediaExtractor::SEEK_TO_NEXT_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_NEXT_SYNC"
		);
	}
	jint MediaExtractor::SEEK_TO_PREVIOUS_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_PREVIOUS_SYNC"
		);
	}
	
	// QJniObject forward
	MediaExtractor::MediaExtractor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaExtractor::MediaExtractor()
		: JObject(
			"android.media.MediaExtractor",
			"()V"
		) {}
	
	// Methods
	jboolean MediaExtractor::advance()
	{
		return callMethod<jboolean>(
			"advance",
			"()Z"
		);
	}
	JObject MediaExtractor::getAudioPresentations(jint arg0)
	{
		return callObjectMethod(
			"getAudioPresentations",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jlong MediaExtractor::getCachedDuration()
	{
		return callMethod<jlong>(
			"getCachedDuration",
			"()J"
		);
	}
	android::media::MediaExtractor_CasInfo MediaExtractor::getCasInfo(jint arg0)
	{
		return callObjectMethod(
			"getCasInfo",
			"(I)Landroid/media/MediaExtractor$CasInfo;",
			arg0
		);
	}
	android::media::DrmInitData MediaExtractor::getDrmInitData()
	{
		return callObjectMethod(
			"getDrmInitData",
			"()Landroid/media/DrmInitData;"
		);
	}
	android::os::PersistableBundle MediaExtractor::getMetrics()
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	JObject MediaExtractor::getPsshInfo()
	{
		return callObjectMethod(
			"getPsshInfo",
			"()Ljava/util/Map;"
		);
	}
	jboolean MediaExtractor::getSampleCryptoInfo(android::media::MediaCodec_CryptoInfo arg0)
	{
		return callMethod<jboolean>(
			"getSampleCryptoInfo",
			"(Landroid/media/MediaCodec$CryptoInfo;)Z",
			arg0.object()
		);
	}
	jint MediaExtractor::getSampleFlags()
	{
		return callMethod<jint>(
			"getSampleFlags",
			"()I"
		);
	}
	jlong MediaExtractor::getSampleSize()
	{
		return callMethod<jlong>(
			"getSampleSize",
			"()J"
		);
	}
	jlong MediaExtractor::getSampleTime()
	{
		return callMethod<jlong>(
			"getSampleTime",
			"()J"
		);
	}
	jint MediaExtractor::getSampleTrackIndex()
	{
		return callMethod<jint>(
			"getSampleTrackIndex",
			"()I"
		);
	}
	jint MediaExtractor::getTrackCount()
	{
		return callMethod<jint>(
			"getTrackCount",
			"()I"
		);
	}
	android::media::MediaFormat MediaExtractor::getTrackFormat(jint arg0)
	{
		return callObjectMethod(
			"getTrackFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0
		);
	}
	jboolean MediaExtractor::hasCacheReachedEndOfStream()
	{
		return callMethod<jboolean>(
			"hasCacheReachedEndOfStream",
			"()Z"
		);
	}
	jint MediaExtractor::readSampleData(java::nio::ByteBuffer arg0, jint arg1)
	{
		return callMethod<jint>(
			"readSampleData",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	void MediaExtractor::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaExtractor::seekTo(jlong arg0, jint arg1)
	{
		callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void MediaExtractor::selectTrack(jint arg0)
	{
		callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0
		);
	}
	void MediaExtractor::setDataSource(android::content::res::AssetFileDescriptor arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaExtractor::setDataSource(android::media::MediaDataSource arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.object()
		);
	}
	void MediaExtractor::setDataSource(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaExtractor::setDataSource(jstring arg0)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaExtractor::setDataSource(jstring arg0, JObject arg1)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaExtractor::setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2)
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaExtractor::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void MediaExtractor::setMediaCas(android::media::MediaCas arg0)
	{
		callMethod<void>(
			"setMediaCas",
			"(Landroid/media/MediaCas;)V",
			arg0.object()
		);
	}
	void MediaExtractor::unselectTrack(jint arg0)
	{
		callMethod<void>(
			"unselectTrack",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

