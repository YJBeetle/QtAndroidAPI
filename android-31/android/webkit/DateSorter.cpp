#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./DateSorter.hpp"

namespace android::webkit
{
	// Fields
	jint DateSorter::DAY_COUNT()
	{
		return getStaticField<jint>(
			"android.webkit.DateSorter",
			"DAY_COUNT"
		);
	}
	
	// QJniObject forward
	DateSorter::DateSorter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateSorter::DateSorter(android::content::Context arg0)
		: JObject(
			"android.webkit.DateSorter",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jlong DateSorter::getBoundary(jint arg0) const
	{
		return callMethod<jlong>(
			"getBoundary",
			"(I)J",
			arg0
		);
	}
	jint DateSorter::getIndex(jlong arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(J)I",
			arg0
		);
	}
	JString DateSorter::getLabel(jint arg0) const
	{
		return callObjectMethod(
			"getLabel",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::webkit

