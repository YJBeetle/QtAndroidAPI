#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::icu::text
{
	class UnicodeSet_EntryRange : public JObject
	{
	public:
		// Fields
		jint codepoint();
		jint codepointEnd();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSet_EntryRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_EntryRange(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace android::icu::text

