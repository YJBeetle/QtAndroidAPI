#pragma once

#include "../../../JObject.hpp"


namespace android::icu::text
{
	class AlphabeticIndex_Record : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Record(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Record(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject getData();
		jstring getName();
		jstring toString();
	};
} // namespace android::icu::text

