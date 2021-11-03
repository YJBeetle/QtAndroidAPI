#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::text
{
	class Editable_Factory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Editable_Factory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Editable_Factory(QJniObject obj);
		
		// Constructors
		Editable_Factory();
		
		// Methods
		static android::text::Editable_Factory getInstance();
		JObject newEditable(JString arg0);
	};
} // namespace android::text

