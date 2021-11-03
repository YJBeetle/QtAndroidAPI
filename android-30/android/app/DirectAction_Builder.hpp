#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class DirectAction;
}
namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app
{
	class DirectAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DirectAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DirectAction_Builder(QJniObject obj);
		
		// Constructors
		DirectAction_Builder(JString arg0);
		
		// Methods
		android::app::DirectAction build() const;
		android::app::DirectAction_Builder setExtras(android::os::Bundle arg0) const;
		android::app::DirectAction_Builder setLocusId(android::content::LocusId arg0) const;
	};
} // namespace android::app

