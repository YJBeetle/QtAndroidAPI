#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvContentRating : public __JniBaseClass
	{
	public:
		// Fields
		static android::media::tv::TvContentRating UNRATED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContentRating(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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
		__JniBaseClass getSubRatings();
		jint hashCode();
	};
} // namespace android::media::tv

