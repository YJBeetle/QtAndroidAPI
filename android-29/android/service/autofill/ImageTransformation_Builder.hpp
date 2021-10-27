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
		
		ImageTransformation_Builder(QAndroidJniObject obj);
		// Constructors
		ImageTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, jint &arg2);
		ImageTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, jint &arg2, jstring &arg3);
		ImageTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, jint &arg2, const QString &arg3);
		ImageTransformation_Builder() = default;
		
		// Methods
		QAndroidJniObject addOption(java::util::regex::Pattern arg0, jint arg1);
		QAndroidJniObject addOption(java::util::regex::Pattern arg0, jint arg1, jstring arg2);
		QAndroidJniObject addOption(java::util::regex::Pattern arg0, jint arg1, const QString &arg2);
		QAndroidJniObject build();
	};
} // namespace android::service::autofill

