#include "./TvContentRating.hpp"

namespace android::media::tv
{
	// Fields
	QAndroidJniObject TvContentRating::UNRATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContentRating",
			"UNRATED",
			"Landroid/media/tv/TvContentRating;"
		);
	}
	
	TvContentRating::TvContentRating(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TvContentRating::createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"createRating",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject TvContentRating::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0
		);
	}
	jboolean TvContentRating::contains(android::media::tv::TvContentRating arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvContentRating::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring TvContentRating::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getDomain()
	{
		return __thiz.callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getMainRating()
	{
		return __thiz.callObjectMethod(
			"getMainRating",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContentRating::getRatingSystem()
	{
		return __thiz.callObjectMethod(
			"getRatingSystem",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvContentRating::getSubRatings()
	{
		return __thiz.callObjectMethod(
			"getSubRatings",
			"()Ljava/util/List;"
		);
	}
	jint TvContentRating::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::tv

