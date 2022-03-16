#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
class JString;

namespace android::app
{
	class VoiceInteractor_Request : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_Request(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		android::app::Activity getActivity() const;
		android::content::Context getContext() const;
		JString getName() const;
		void onAttached(android::app::Activity arg0) const;
		void onCancel() const;
		void onDetached() const;
		JString toString() const;
	};
} // namespace android::app

