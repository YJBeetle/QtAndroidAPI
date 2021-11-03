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
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		android::app::Activity getActivity();
		android::content::Context getContext();
		JString getName();
		void onAttached(android::app::Activity arg0);
		void onCancel();
		void onDetached();
		JString toString();
	};
} // namespace android::app

