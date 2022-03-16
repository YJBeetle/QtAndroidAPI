#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::icu::lang
{
	class UCharacterDirection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UCharacterDirection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterDirection(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString toString(jint arg0);
	};
} // namespace android::icu::lang

