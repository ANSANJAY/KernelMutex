int mutex_lock_interruptible(struct mutex *lock);

	places the calling process in the TASK_UNINTERRUPTIBLE state when it sleeps

Return value:

	0 -> mutex is acquired

	-EINTR	-> If the task receives a signal while waiting for mutex


int mutex_lock_killable(struct mutex *lock);


	places the calling process in the TASK_KILLABLE state when it sleeps, only fatal signal can interrupt

Return value:

	0 -> mutex is acquired

	-EINTR	-> If the task receives a fatal signal while waiting for mutex

