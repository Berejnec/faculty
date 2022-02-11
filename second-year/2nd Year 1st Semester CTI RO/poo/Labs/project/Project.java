package com.project;

public abstract class Project {
    protected Programator manager;
    protected Programator[] participanti;
    protected String titlu;
    protected String obiectiv;
    protected long fonduri;
    protected int nrParticipanti = 0;

    public void addMember(Programator p){
        this.participanti[nrParticipanti++] = p;
    }
}
