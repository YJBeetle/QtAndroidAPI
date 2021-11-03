#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class ImageTransformation;
}
namespace android::view::autofill
{
	class AutofillId;
}
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class ImageTransformation_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageTransformation_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageTransformation_Builder(QAndroidJniObject obj);
		
		// Constructors
		ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2);
		ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2, JString arg3);
		
		// Methods
		android::service::autofill::ImageTransformation_Builder addOption(java::util::regex::Pattern arg0, jint arg1) const;
		android::service::autofill::ImageTransformation_Builder addOption(java::util::regex::Pattern arg0, jint arg1, JString arg2) const;
		android::service::autofill::ImageTransformation build() const;
	};
} // namespace android::service::autofill

