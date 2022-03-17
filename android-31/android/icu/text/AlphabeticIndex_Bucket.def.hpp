#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType;
}
class JString;

namespace android::icu::text
{
	class AlphabeticIndex_Bucket : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Bucket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Bucket(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getLabel() const;
		android::icu::text::AlphabeticIndex_Bucket_LabelType getLabelType() const;
		JObject iterator() const;
		jint size() const;
		JString toString() const;
	};
} // namespace android::icu::text

