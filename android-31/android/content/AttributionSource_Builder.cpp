#include "./AttributionSource.hpp"
#include "./AttributionSource_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	AttributionSource_Builder::AttributionSource_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AttributionSource_Builder::AttributionSource_Builder(jint arg0)
		: __JniBaseClass(
			"android.content.AttributionSource$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::content::AttributionSource AttributionSource_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/AttributionSource;"
		);
	}
	android::content::AttributionSource_Builder AttributionSource_Builder::setAttributionTag(jstring arg0)
	{
		return callObjectMethod(
			"setAttributionTag",
			"(Ljava/lang/String;)Landroid/content/AttributionSource$Builder;",
			arg0
		);
	}
	android::content::AttributionSource_Builder AttributionSource_Builder::setNext(android::content::AttributionSource arg0)
	{
		return callObjectMethod(
			"setNext",
			"(Landroid/content/AttributionSource;)Landroid/content/AttributionSource$Builder;",
			arg0.object()
		);
	}
	android::content::AttributionSource_Builder AttributionSource_Builder::setPackageName(jstring arg0)
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/content/AttributionSource$Builder;",
			arg0
		);
	}
} // namespace android::content

