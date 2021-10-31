#include "../content/Context.hpp"
#include "./MediaRouter_RouteCategory.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter_RouteCategory::MediaRouter_RouteCategory(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaRouter_RouteCategory::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaRouter_RouteCategory::getName(android::content::Context arg0)
	{
		return callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	__JniBaseClass MediaRouter_RouteCategory::getRoutes(__JniBaseClass arg0)
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
	jstring MediaRouter_RouteCategory::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

