#include "../content/Context.hpp"
#include "./DateSorter.hpp"

namespace android::webkit
{
	// Fields
	jint DateSorter::DAY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.DateSorter",
			"DAY_COUNT"
		);
	}
	
	DateSorter::DateSorter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateSorter::DateSorter(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.DateSorter",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jlong DateSorter::getBoundary(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getBoundary",
			"(I)J",
			arg0
		);
	}
	jint DateSorter::getIndex(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(J)I",
			arg0
		);
	}
	jstring DateSorter::getLabel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::webkit

