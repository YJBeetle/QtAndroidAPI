#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class LiveFolders : public JObject
	{
	public:
		// Fields
		static JString ACTION_CREATE_LIVE_FOLDER();
		static JString DESCRIPTION();
		static jint DISPLAY_MODE_GRID();
		static jint DISPLAY_MODE_LIST();
		static JString EXTRA_LIVE_FOLDER_BASE_INTENT();
		static JString EXTRA_LIVE_FOLDER_DISPLAY_MODE();
		static JString EXTRA_LIVE_FOLDER_ICON();
		static JString EXTRA_LIVE_FOLDER_NAME();
		static JString ICON_BITMAP();
		static JString ICON_PACKAGE();
		static JString ICON_RESOURCE();
		static JString INTENT();
		static JString NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LiveFolders(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LiveFolders(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

