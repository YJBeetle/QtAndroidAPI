#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class CursorJoiner_Result;
}

namespace android::database
{
	class CursorJoiner : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorJoiner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CursorJoiner(QJniObject obj);
		
		// Constructors
		CursorJoiner(JObject arg0, jarray arg1, JObject arg2, jarray arg3);
		
		// Methods
		jboolean hasNext();
		JObject iterator();
		android::database::CursorJoiner_Result next();
		void remove();
	};
} // namespace android::database

