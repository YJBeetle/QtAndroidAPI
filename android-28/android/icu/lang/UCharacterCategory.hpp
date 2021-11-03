#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::icu::lang
{
	class UCharacterCategory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UCharacterCategory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterCategory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString toString(jint arg0);
	};
} // namespace android::icu::lang

