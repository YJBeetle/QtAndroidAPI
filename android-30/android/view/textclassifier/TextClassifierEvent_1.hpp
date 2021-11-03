#pragma once

#include "../../../JObject.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_1 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_1(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_1(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::textclassifier

