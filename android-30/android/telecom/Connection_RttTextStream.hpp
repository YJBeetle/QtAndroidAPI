#pragma once

#include "../../JObject.hpp"


namespace android::telecom
{
	class Connection_RttTextStream : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Connection_RttTextStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Connection_RttTextStream(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring read();
		jstring readImmediately();
		void write(jstring arg0);
	};
} // namespace android::telecom

