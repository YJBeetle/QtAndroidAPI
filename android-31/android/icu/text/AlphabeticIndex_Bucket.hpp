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
		
		// QJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Bucket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Bucket(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getLabel();
		android::icu::text::AlphabeticIndex_Bucket_LabelType getLabelType();
		__JniBaseClass iterator();
		jint size();
		jstring toString();
	};
} // namespace android::icu::text

