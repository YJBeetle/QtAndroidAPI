#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::graphics::drawable
{
	class Icon;
}
class JString;

namespace android::app
{
	class StatusBarManager : public JObject
	{
	public:
		// Fields
		static jint TILE_ADD_REQUEST_ERROR_APP_NOT_IN_FOREGROUND();
		static jint TILE_ADD_REQUEST_ERROR_BAD_COMPONENT();
		static jint TILE_ADD_REQUEST_ERROR_MISMATCHED_PACKAGE();
		static jint TILE_ADD_REQUEST_ERROR_NOT_CURRENT_USER();
		static jint TILE_ADD_REQUEST_ERROR_NO_STATUS_BAR_SERVICE();
		static jint TILE_ADD_REQUEST_ERROR_REQUEST_IN_PROGRESS();
		static jint TILE_ADD_REQUEST_RESULT_TILE_ADDED();
		static jint TILE_ADD_REQUEST_RESULT_TILE_ALREADY_ADDED();
		static jint TILE_ADD_REQUEST_RESULT_TILE_NOT_ADDED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatusBarManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatusBarManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void requestAddTileService(android::content::ComponentName arg0, JString arg1, android::graphics::drawable::Icon arg2, JObject arg3, JObject arg4) const;
	};
} // namespace android::app

