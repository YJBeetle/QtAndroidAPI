#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class IDNA_Info : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IDNA_Info(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IDNA_Info(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IDNA_Info();
		
		// Methods
		JObject getErrors() const;
		jboolean hasErrors() const;
		jboolean isTransitionalDifferent() const;
	};
} // namespace android::icu::text

