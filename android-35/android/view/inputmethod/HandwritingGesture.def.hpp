#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::view::inputmethod
{
	class HandwritingGesture : public JObject
	{
	public:
		// Fields
		static jint GRANULARITY_CHARACTER();
		static jint GRANULARITY_WORD();
		
		// QJniObject forward
		template<typename ...Ts> explicit HandwritingGesture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HandwritingGesture(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getFallbackText() const;
	};
} // namespace android::view::inputmethod

