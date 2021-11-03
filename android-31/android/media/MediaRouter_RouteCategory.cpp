#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaRouter_RouteCategory.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaRouter_RouteCategory::MediaRouter_RouteCategory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaRouter_RouteCategory::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString MediaRouter_RouteCategory::getName(android::content::Context arg0)
	{
		return callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JObject MediaRouter_RouteCategory::getRoutes(JObject arg0)
	{
		return callObjectMethod(
			"getRoutes",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	jint MediaRouter_RouteCategory::getSupportedTypes()
	{
		return callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	jboolean MediaRouter_RouteCategory::isGroupable()
	{
		return callMethod<jboolean>(
			"isGroupable",
			"()Z"
		);
	}
	JString MediaRouter_RouteCategory::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

