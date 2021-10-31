#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::autofill
{
	class ImageTransformation;
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
	class ImageTransformation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageTransformation_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImageTransformation_Builder(QAndroidJniObject obj);
		
		// Constructors
		ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2);
		ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2, jstring arg3);
		
		// Methods
		android::service::autofill::ImageTransformation_Builder addOption(java::util::regex::Pattern arg0, jint arg1);
		android::service::autofill::ImageTransformation_Builder addOption(java::util::regex::Pattern arg0, jint arg1, jstring arg2);
		android::service::autofill::ImageTransformation build();
	};
} // namespace android::service::autofill

