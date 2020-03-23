#pragma once

#ifndef ANDROID_MEDIA_MEDIAEXTRACTOR
#define ANDROID_MEDIA_MEDIAEXTRACTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::media
{
	class MediaDataSource;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::media
{
	class MediaCas;
}
namespace __jni_impl::android::media
{
	class MediaExtractor_CasInfo;
}
namespace __jni_impl::android::media
{
	class DrmInitData;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::android::media
{
	class MediaCodec_CryptoInfo;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::media
{
	class MediaExtractor : public __JniBaseClass
	{
	public:
		// Fields
		static jint SAMPLE_FLAG_ENCRYPTED();
		static jint SAMPLE_FLAG_PARTIAL_FRAME();
		static jint SAMPLE_FLAG_SYNC();
		static jint SEEK_TO_CLOSEST_SYNC();
		static jint SEEK_TO_NEXT_SYNC();
		static jint SEEK_TO_PREVIOUS_SYNC();
		
		// Constructors
		void __constructor();
		
		// Methods
		void release();
		jboolean advance();
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setDataSource(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2);
		void setDataSource(__jni_impl::android::media::MediaDataSource arg0);
		void setDataSource(jstring arg0);
		void setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0);
		void setMediaCas(__jni_impl::android::media::MediaCas arg0);
		QAndroidJniObject getCasInfo(jint arg0);
		jint getTrackCount();
		QAndroidJniObject getDrmInitData();
		QAndroidJniObject getAudioPresentations(jint arg0);
		QAndroidJniObject getPsshInfo();
		QAndroidJniObject getTrackFormat(jint arg0);
		void unselectTrack(jint arg0);
		jint readSampleData(__jni_impl::java::nio::ByteBuffer arg0, jint arg1);
		jint getSampleTrackIndex();
		jlong getSampleTime();
		jlong getSampleSize();
		jint getSampleFlags();
		jboolean getSampleCryptoInfo(__jni_impl::android::media::MediaCodec_CryptoInfo arg0);
		jlong getCachedDuration();
		jboolean hasCacheReachedEndOfStream();
		QAndroidJniObject getMetrics();
		void seekTo(jlong arg0, jint arg1);
		void selectTrack(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "../../java/io/FileDescriptor.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "MediaDataSource.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "MediaCas.hpp"
#include "MediaExtractor_CasInfo.hpp"
#include "DrmInitData.hpp"
#include "MediaFormat.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "MediaCodec_CryptoInfo.hpp"
#include "../os/PersistableBundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaExtractor::SAMPLE_FLAG_ENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_ENCRYPTED");
	}
	jint MediaExtractor::SAMPLE_FLAG_PARTIAL_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_PARTIAL_FRAME");
	}
	jint MediaExtractor::SAMPLE_FLAG_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_SYNC");
	}
	jint MediaExtractor::SEEK_TO_CLOSEST_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_CLOSEST_SYNC");
	}
	jint MediaExtractor::SEEK_TO_NEXT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_NEXT_SYNC");
	}
	jint MediaExtractor::SEEK_TO_PREVIOUS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_PREVIOUS_SYNC");
	}
	
	// Constructors
	void MediaExtractor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaExtractor",
			"()V");
	}
	
	// Methods
	void MediaExtractor::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	jboolean MediaExtractor::advance()
	{
		return __thiz.callMethod<jboolean>(
			"advance",
			"()Z");
	}
	void MediaExtractor::setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void MediaExtractor::setDataSource(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void MediaExtractor::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void MediaExtractor::setDataSource(__jni_impl::android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object());
	}
	void MediaExtractor::setDataSource(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaExtractor::setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void MediaExtractor::setDataSource(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void MediaExtractor::setMediaCas(__jni_impl::android::media::MediaCas arg0)
	{
		__thiz.callMethod<void>(
			"setMediaCas",
			"(Landroid/media/MediaCas;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaExtractor::getCasInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getCasInfo",
			"(I)Landroid/media/MediaExtractor$CasInfo;",
			arg0);
	}
	jint MediaExtractor::getTrackCount()
	{
		return __thiz.callMethod<jint>(
			"getTrackCount",
			"()I");
	}
	QAndroidJniObject MediaExtractor::getDrmInitData()
	{
		return __thiz.callObjectMethod(
			"getDrmInitData",
			"()Landroid/media/DrmInitData;");
	}
	QAndroidJniObject MediaExtractor::getAudioPresentations(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAudioPresentations",
			"(I)Ljava/util/List;",
			arg0);
	}
	QAndroidJniObject MediaExtractor::getPsshInfo()
	{
		return __thiz.callObjectMethod(
			"getPsshInfo",
			"()Ljava/util/Map;");
	}
	QAndroidJniObject MediaExtractor::getTrackFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTrackFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0);
	}
	void MediaExtractor::unselectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"unselectTrack",
			"(I)V",
			arg0);
	}
	jint MediaExtractor::readSampleData(__jni_impl::java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"readSampleData",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.__jniObject().object(),
			arg1);
	}
	jint MediaExtractor::getSampleTrackIndex()
	{
		return __thiz.callMethod<jint>(
			"getSampleTrackIndex",
			"()I");
	}
	jlong MediaExtractor::getSampleTime()
	{
		return __thiz.callMethod<jlong>(
			"getSampleTime",
			"()J");
	}
	jlong MediaExtractor::getSampleSize()
	{
		return __thiz.callMethod<jlong>(
			"getSampleSize",
			"()J");
	}
	jint MediaExtractor::getSampleFlags()
	{
		return __thiz.callMethod<jint>(
			"getSampleFlags",
			"()I");
	}
	jboolean MediaExtractor::getSampleCryptoInfo(__jni_impl::android::media::MediaCodec_CryptoInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getSampleCryptoInfo",
			"(Landroid/media/MediaCodec$CryptoInfo;)Z",
			arg0.__jniObject().object());
	}
	jlong MediaExtractor::getCachedDuration()
	{
		return __thiz.callMethod<jlong>(
			"getCachedDuration",
			"()J");
	}
	jboolean MediaExtractor::hasCacheReachedEndOfStream()
	{
		return __thiz.callMethod<jboolean>(
			"hasCacheReachedEndOfStream",
			"()Z");
	}
	QAndroidJniObject MediaExtractor::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;");
	}
	void MediaExtractor::seekTo(jlong arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1);
	}
	void MediaExtractor::selectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaExtractor : public __jni_impl::android::media::MediaExtractor
	{
	public:
		MediaExtractor(QAndroidJniObject obj) { __thiz = obj; }
		MediaExtractor()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAEXTRACTOR

