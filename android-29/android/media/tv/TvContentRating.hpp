#pragma once

#include "../../../JObject.hpp"


namespace android::media::tv
{
	class TvContentRating : public JObject
	{
	public:
		// Fields
		static android::media::tv::TvContentRating UNRATED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContentRating(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContentRating(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::tv::TvContentRating createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3);
		static android::media::tv::TvContentRating unflattenFromString(jstring arg0);
		jboolean contains(android::media::tv::TvContentRating arg0);
		jboolean equals(jobject arg0);
		jstring flattenToString();
		jstring getDomain();
		jstring getMainRating();
		jstring getRatingSystem();
		JObject getSubRatings();
		jint hashCode();
	};
} // namespace android::media::tv

