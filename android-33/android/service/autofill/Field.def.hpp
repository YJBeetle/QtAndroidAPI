#pragma once

#include "../../../JObject.hpp"

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
	class Field : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Field(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Field(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::util::regex::Pattern getFilter() const;
		android::service::autofill::Presentations getPresentations() const;
		android::view::autofill::AutofillValue getValue() const;
	};
} // namespace android::service::autofill

