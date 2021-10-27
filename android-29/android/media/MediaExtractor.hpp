#pragma once

#ifndef ANDROID_MEDIA_MEDIAEXTRACTOR
#define ANDROID_MEDIA_MEDIAEXTRACTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::media
{
	class DrmInitData;
}
namespace __jni_impl::android::media
{
	class MediaCas;
}
namespace __jni_impl::android::media
{
	class MediaCodec_CryptoInfo;
}
namespace __jni_impl::android::media
{
	class MediaDataSource;
}
namespace __jni_impl::android::media
{
	class MediaExtractor_CasInfo;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
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
		jboolean advance();
		QAndroidJniObject getAudioPresentations(jint arg0);
		jlong getCachedDuration();
		QAndroidJniObject getCasInfo(jint arg0);
		QAndroidJniObject getDrmInitData();
		QAndroidJniObject getMetrics();
		QAndroidJniObject getPsshInfo();
		jboolean getSampleCryptoInfo(__jni_impl::android::media::MediaCodec_CryptoInfo arg0);
		jint getSampleFlags();
		jlong getSampleSize();
		jlong getSampleTime();
		jint getSampleTrackIndex();
		jint getTrackCount();
		QAndroidJniObject getTrackFormat(jint arg0);
		jboolean hasCacheReachedEndOfStream();
		jint readSampleData(__jni_impl::java::nio::ByteBuffer arg0, jint arg1);
		void release();
		void seekTo(jlong arg0, jint arg1);
		void selectTrack(jint arg0);
		void setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0);
		void setDataSource(__jni_impl::android::media::MediaDataSource arg0);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0);
		void setDataSource(jstring arg0);
		void setDataSource(const QString &arg0);
		void setDataSource(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void setDataSource(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setMediaCas(__jni_impl::android::media::MediaCas arg0);
		void unselectTrack(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "DrmInitData.hpp"
#include "MediaCas.hpp"
#include "MediaCodec_CryptoInfo.hpp"
#include "MediaDataSource.hpp"
#include "MediaExtractor_CasInfo.hpp"
#include "MediaFormat.hpp"
#include "../net/Uri.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaExtractor::SAMPLE_FLAG_ENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_ENCRYPTED"
		);
	}
	jint MediaExtractor::SAMPLE_FLAG_PARTIAL_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_PARTIAL_FRAME"
		);
	}
	jint MediaExtractor::SAMPLE_FLAG_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SAMPLE_FLAG_SYNC"
		);
	}
	jint MediaExtractor::SEEK_TO_CLOSEST_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_CLOSEST_SYNC"
		);
	}
	jint MediaExtractor::SEEK_TO_NEXT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_NEXT_SYNC"
		);
	}
	jint MediaExtractor::SEEK_TO_PREVIOUS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaExtractor",
			"SEEK_TO_PREVIOUS_SYNC"
		);
	}
	
	// Constructors
	void MediaExtractor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaExtractor",
			"()V"
		);
	}
	
	// Methods
	jboolean MediaExtractor::advance()
	{
		return __thiz.callMethod<jboolean>(
			"advance",
			"()Z"
		);
	}
	QAndroidJniObject MediaExtractor::getAudioPresentations(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAudioPresentations",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jlong MediaExtractor::getCachedDuration()
	{
		return __thiz.callMethod<jlong>(
			"getCachedDuration",
			"()J"
		);
	}
	QAndroidJniObject MediaExtractor::getCasInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getCasInfo",
			"(I)Landroid/media/MediaExtractor$CasInfo;",
			arg0
		);
	}
	QAndroidJniObject MediaExtractor::getDrmInitData()
	{
		return __thiz.callObjectMethod(
			"getDrmInitData",
			"()Landroid/media/DrmInitData;"
		);
	}
	QAndroidJniObject MediaExtractor::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject MediaExtractor::getPsshInfo()
	{
		return __thiz.callObjectMethod(
			"getPsshInfo",
			"()Ljava/util/Map;"
		);
	}
	jboolean MediaExtractor::getSampleCryptoInfo(__jni_impl::android::media::MediaCodec_CryptoInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getSampleCryptoInfo",
			"(Landroid/media/MediaCodec$CryptoInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	jint MediaExtractor::getSampleFlags()
	{
		return __thiz.callMethod<jint>(
			"getSampleFlags",
			"()I"
		);
	}
	jlong MediaExtractor::getSampleSize()
	{
		return __thiz.callMethod<jlong>(
			"getSampleSize",
			"()J"
		);
	}
	jlong MediaExtractor::getSampleTime()
	{
		return __thiz.callMethod<jlong>(
			"getSampleTime",
			"()J"
		);
	}
	jint MediaExtractor::getSampleTrackIndex()
	{
		return __thiz.callMethod<jint>(
			"getSampleTrackIndex",
			"()I"
		);
	}
	jint MediaExtractor::getTrackCount()
	{
		return __thiz.callMethod<jint>(
			"getTrackCount",
			"()I"
		);
	}
	QAndroidJniObject MediaExtractor::getTrackFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTrackFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0
		);
	}
	jboolean MediaExtractor::hasCacheReachedEndOfStream()
	{
		return __thiz.callMethod<jboolean>(
			"hasCacheReachedEndOfStream",
			"()Z"
		);
	}
	jint MediaExtractor::readSampleData(__jni_impl::java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"readSampleData",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaExtractor::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaExtractor::seekTo(jlong arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void MediaExtractor::selectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0
		);
	}
	void MediaExtractor::setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaExtractor::setDataSource(__jni_impl::android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaExtractor::setDataSource(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaExtractor::setDataSource(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaExtractor::setDataSource(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaExtractor::setDataSource(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaExtractor::setDataSource(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaExtractor::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaExtractor::setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void MediaExtractor::setMediaCas(__jni_impl::android::media::MediaCas arg0)
	{
		__thiz.callMethod<void>(
			"setMediaCas",
			"(Landroid/media/MediaCas;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaExtractor::unselectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"unselectTrack",
			"(I)V",
			arg0
		);
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

