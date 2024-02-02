#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::view::autofill
{
	class VirtualViewFillInfo;
}

namespace android::view::autofill
{
	class VirtualViewFillInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualViewFillInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualViewFillInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VirtualViewFillInfo_Builder();
		
		// Methods
		android::view::autofill::VirtualViewFillInfo build() const;
		android::view::autofill::VirtualViewFillInfo_Builder setAutofillHints(JArray arg0) const;
	};
} // namespace android::view::autofill

