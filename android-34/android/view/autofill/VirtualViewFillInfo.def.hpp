#pragma once

#include "../../../JObject.hpp"

class JArray;

namespace android::view::autofill
{
	class VirtualViewFillInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualViewFillInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualViewFillInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JArray getAutofillHints() const;
	};
} // namespace android::view::autofill

