#pragma once

#include "../../../JObject.hpp"


namespace android::os::storage
{
	class OnObbStateChangeListener : public JObject
	{
	public:
		// Fields
		static jint ERROR_ALREADY_MOUNTED();
		static jint ERROR_COULD_NOT_MOUNT();
		static jint ERROR_COULD_NOT_UNMOUNT();
		static jint ERROR_INTERNAL();
		static jint ERROR_NOT_MOUNTED();
		static jint ERROR_PERMISSION_DENIED();
		static jint MOUNTED();
		static jint UNMOUNTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit OnObbStateChangeListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OnObbStateChangeListener(QJniObject obj);
		
		// Constructors
		OnObbStateChangeListener();
		
		// Methods
		void onObbStateChange(jstring arg0, jint arg1);
	};
} // namespace android::os::storage

