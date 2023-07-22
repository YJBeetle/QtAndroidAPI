#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class GameState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MODE_CONTENT();
		static jint MODE_GAMEPLAY_INTERRUPTIBLE();
		static jint MODE_GAMEPLAY_UNINTERRUPTIBLE();
		static jint MODE_NONE();
		static jint MODE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GameState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GameState(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GameState(jboolean arg0, jint arg1);
		GameState(jboolean arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents() const;
		jint getLabel() const;
		jint getMode() const;
		jint getQuality() const;
		jboolean isLoading() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

