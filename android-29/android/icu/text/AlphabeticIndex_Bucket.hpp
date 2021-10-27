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
		
		AlphabeticIndex_Bucket(QAndroidJniObject obj);
		// Constructors
		AlphabeticIndex_Bucket() = default;
		
		// Methods
		jstring getLabel();
		QAndroidJniObject getLabelType();
		QAndroidJniObject iterator();
		jint size();
		jstring toString();
	};
} // namespace android::icu::text

