#pragma once

#include "../../../JObject.hpp"

namespace android::icu::lang
{
	class UCharacterEnums : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UCharacterEnums(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterEnums(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::lang

