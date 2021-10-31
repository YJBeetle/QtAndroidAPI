#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType;
}

namespace android::icu::text
{
	class AlphabeticIndex_Bucket : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Bucket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Bucket(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getLabel();
		QAndroidJniObject getLabelType();
		QAndroidJniObject iterator();
		jint size();
		jstring toString();
	};
} // namespace android::icu::text

