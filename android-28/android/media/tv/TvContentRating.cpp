#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TvContentRating.hpp"

namespace android::media::tv
{
	// Fields
	android::media::tv::TvContentRating TvContentRating::UNRATED()
	{
		return getStaticObjectField(
			"android.media.tv.TvContentRating",
			"UNRATED",
			"Landroid/media/tv/TvContentRating;"
		);
	}
	
	// QAndroidJniObject forward
	TvContentRating::TvContentRating(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::tv::TvContentRating TvContentRating::createRating(JString arg0, JString arg1, JString arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"createRating",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
	android::media::tv::TvContentRating TvContentRating::unflattenFromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContentRating",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/media/tv/TvContentRating;",
			arg0.object<jstring>()
		);
	}
	jboolean TvContentRating::contains(android::media::tv::TvContentRating arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.object()
		);
	}
	jboolean TvContentRating::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString TvContentRating::flattenToString()
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		);
	}
	JString TvContentRating::getDomain()
	{
		return callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		);
	}
	JString TvContentRating::getMainRating()
	{
		return callObjectMethod(
			"getMainRating",
			"()Ljava/lang/String;"
		);
	}
	JString TvContentRating::getRatingSystem()
	{
		return callObjectMethod(
			"getRatingSystem",
			"()Ljava/lang/String;"
		);
	}
	JObject TvContentRating::getSubRatings()
	{
		return callObjectMethod(
			"getSubRatings",
			"()Ljava/util/List;"
		);
	}
	jint TvContentRating::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::tv

