#include "./AttributionSource.hpp"
#include "./ContextParams.hpp"
#include "./ContextParams_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	ContextParams_Builder::ContextParams_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContextParams_Builder::ContextParams_Builder()
		: __JniBaseClass(
			"android.content.ContextParams$Builder",
			"()V"
		) {}
	ContextParams_Builder::ContextParams_Builder(android::content::ContextParams arg0)
		: __JniBaseClass(
			"android.content.ContextParams$Builder",
			"(Landroid/content/ContextParams;)V",
			arg0.object()
		) {}
	
	// Methods
	android::content::ContextParams ContextParams_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContextParams;"
		);
	}
	android::content::ContextParams_Builder ContextParams_Builder::setAttributionTag(jstring arg0)
	{
		return callObjectMethod(
			"setAttributionTag",
			"(Ljava/lang/String;)Landroid/content/ContextParams$Builder;",
			arg0
		);
	}
	android::content::ContextParams_Builder ContextParams_Builder::setNextAttributionSource(android::content::AttributionSource arg0)
	{
		return callObjectMethod(
			"setNextAttributionSource",
			"(Landroid/content/AttributionSource;)Landroid/content/ContextParams$Builder;",
			arg0.object()
		);
	}
} // namespace android::content

