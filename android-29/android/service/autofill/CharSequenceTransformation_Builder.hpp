#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CharSequenceTransformation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		CharSequenceTransformation_Builder(QAndroidJniObject obj);
		// Constructors
		CharSequenceTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, jstring &arg2);
		CharSequenceTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, const QString &arg2);
		CharSequenceTransformation_Builder() = default;
		
		// Methods
		QAndroidJniObject addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jstring arg2);
		QAndroidJniObject addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, const QString &arg2);
		QAndroidJniObject build();
	};
} // namespace android::service::autofill

