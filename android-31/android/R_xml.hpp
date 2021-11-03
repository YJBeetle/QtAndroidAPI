#pragma once

#include "../JObject.hpp"


namespace android
{
	class R_xml : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_xml(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_xml(QJniObject obj);
		
		// Constructors
		R_xml();
		
		// Methods
	};
} // namespace android

