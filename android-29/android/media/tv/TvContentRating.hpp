#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTENTRATING
#define ANDROID_MEDIA_TV_TVCONTENTRATING

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::tv
{
	class TvContentRating : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject UNRATED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean contains(__jni_impl::android::media::tv::TvContentRating arg0);
		static QAndroidJniObject createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3);
		QAndroidJniObject getDomain();
		QAndroidJniObject getRatingSystem();
		QAndroidJniObject getMainRating();
		QAndroidJniObject getSubRatings();
		QAndroidJniObject flattenToString();
		static QAndroidJniObject unflattenFromString(jstring arg0);
	};
} // namespace __jni_impl::android::media::tv


namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvContentRating::UNRATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContentRating",
			"UNRATED",
			"Landroid/media/tv/TvContentRating;");
	}
	
	// Constructors
	void TvContentRating::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContentRating",
			"(V)V");
	}
	
	// Methods
	jboolean TvContentRating::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint TvContentRating::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean TvContentRating::contains(__jni_impl::android::media::tv::TvContentRating arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TvContentRating::createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"createRating",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject TvContentRating::getDomain()
	{
		return __thiz.callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TvContentRating::getRatingSystem()
	{
		return __thiz.callObjectMethod(
			"getRatingSystem",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TvContentRating::getMainRating()
	{
		return __thiz.callObjectMethod(
			"getMainRating",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TvContentRating::getSubRatings()
	{
		return __thiz.callObjectMethod(
			"getSubRatings",
			"()Ljava/util/List;");
	}
	QAndroidJniObject TvContentRating::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TvContentRating::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContentRating : public __jni_impl::android::media::tv::TvContentRating
	{
	public:
		TvContentRating(QAndroidJniObject obj) { __thiz = obj; }
		TvContentRating()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVCONTENTRATING

