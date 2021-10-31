#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvContentRating : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject UNRATED();
		
		TvContentRating(QAndroidJniObject obj);
		// Constructors
		TvContentRating() = default;
		
		// Methods
		static QAndroidJniObject createRating(jstring arg0, jstring arg1, jstring arg2, jarray arg3);
		static QAndroidJniObject unflattenFromString(jstring arg0);
		jboolean contains(android::media::tv::TvContentRating arg0);
		jboolean equals(jobject arg0);
		jstring flattenToString();
		jstring getDomain();
		jstring getMainRating();
		jstring getRatingSystem();
		QAndroidJniObject getSubRatings();
		jint hashCode();
	};
} // namespace android::media::tv

