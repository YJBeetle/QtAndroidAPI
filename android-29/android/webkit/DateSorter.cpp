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
	
	// QAndroidJniObject forward
	DateSorter::DateSorter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateSorter::DateSorter(android::content::Context arg0)
		: __JniBaseClass(
			"android.webkit.DateSorter",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jlong DateSorter::getBoundary(jint arg0)
	{
		return callMethod<jlong>(
			"getBoundary",
			"(I)J",
			arg0
		);
	}
	jint DateSorter::getIndex(jlong arg0)
	{
		return callMethod<jint>(
			"getIndex",
			"(J)I",
			arg0
		);
	}
	jstring DateSorter::getLabel(jint arg0)
	{
		return callObjectMethod(
			"getLabel",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::webkit

