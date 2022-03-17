#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::icu::lang
{
	class UCharacterCategory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UCharacterCategory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterCategory(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString toString(jint arg0);
	};
} // namespace android::icu::lang

