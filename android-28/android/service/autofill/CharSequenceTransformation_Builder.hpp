#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class CharSequenceTransformation;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class CharSequenceTransformation_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharSequenceTransformation_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharSequenceTransformation_Builder(QAndroidJniObject obj);
		
		// Constructors
		CharSequenceTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jstring arg2);
		
		// Methods
		android::service::autofill::CharSequenceTransformation_Builder addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jstring arg2);
		android::service::autofill::CharSequenceTransformation build();
	};
} // namespace android::service::autofill

