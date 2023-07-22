#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class Field;
}
namespace android::service::autofill
{
	class Presentations;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class Field_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Field_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Field_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Field_Builder();
		
		// Methods
		android::service::autofill::Field build() const;
		android::service::autofill::Field_Builder setFilter(java::util::regex::Pattern arg0) const;
		android::service::autofill::Field_Builder setPresentations(android::service::autofill::Presentations arg0) const;
		android::service::autofill::Field_Builder setValue(android::view::autofill::AutofillValue arg0) const;
	};
} // namespace android::service::autofill

